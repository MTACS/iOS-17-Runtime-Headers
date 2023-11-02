
@interface _ICLLActionMessage : PBCodable <NSCopying> {
    int  _action;
    _ICLLAddQueueItemsAction * _addItems;
    _ICLLClientInfoAction * _clientInfo;
    _ICLLCurrentItemChangeAction * _currentItemChange;
    _ICLLCurrentItemTransitionAction * _currentItemTransition;
    _ICLLDisplayMessage * _displayMessage;
    bool  _displayNotice;
    struct { 
        unsigned int originatorId : 1; 
        unsigned int action : 1; 
        unsigned int displayNotice : 1; 
    }  _has;
    _ICLLMoveQueueItemAction * _moveItem;
    long long  _originatorId;
    NSString * _originatorUUID;
    _ICLLParticipantChangeAction * _participantChange;
    _ICLLPlayNowQueueItemsAction * _playNowQueueItems;
    _ICLLPlaybackSyncAction * _playbackSync;
    _ICLLQueueSyncAction * _queueSync;
    _ICLLReactionAction * _reaction;
    _ICLLRemoveQueueItemAction * _removeItem;
    _ICLLReplaceQueueItemsAction * _replaceQueueItems;
    _ICLLServerNoticeAction * _serverNotice;
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
