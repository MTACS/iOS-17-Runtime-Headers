
@interface AVTStickerTask : NSObject {
    NSString * _avatarRecordIdentifier;
    NSIndexPath * _indexPath;
    unsigned long long  _stickerType;
    id /* block */  _task;
}

@property (nonatomic, readonly) NSString *avatarRecordIdentifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) unsigned long long stickerType;
@property (nonatomic, readonly) id /* block */ task;

+ (id)stickerTaskForSchedulerTask:(id /* block */)arg1 avatarRecordIdentifier:(id)arg2 indexPath:(id)arg3 stickerType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)avatarRecordIdentifier;
- (id)description;
- (id)indexPath;
- (id)initWithTask:(id /* block */)arg1 avatarRecordIdentifier:(id)arg2 indexPath:(id)arg3 stickerType:(unsigned long long)arg4;
- (unsigned long long)stickerType;
- (id /* block */)task;

@end
