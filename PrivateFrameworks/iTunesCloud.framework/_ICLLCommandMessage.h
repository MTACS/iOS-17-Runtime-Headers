
@interface _ICLLCommandMessage : PBCodable <NSCopying> {
    _ICLLAddQueueItemsCommand * _addItems;
    _ICLLClientInfoCommand * _clientInfo;
    int  _command;
    _ICLLCurrentItemChangeCommand * _currentItemChange;
    _ICLLCurrentItemTransitionCommand * _currentItemTransition;
    struct { 
        unsigned int command : 1; 
    }  _has;
    _ICLLMoveQueueItemCommand * _moveItem;
    _ICLLPlayNowQueueItemsCommand * _playNowQueueItems;
    _ICLLPlaybackControlSettingsCommand * _playbackControlSettings;
    _ICLLPlaybackSyncCommand * _playbackSync;
    _ICLLReactionCommand * _reaction;
    _ICLLRemoveQueueItemCommand * _removeItem;
    _ICLLReplaceQueueItemsCommand * _replaceQueueItems;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
