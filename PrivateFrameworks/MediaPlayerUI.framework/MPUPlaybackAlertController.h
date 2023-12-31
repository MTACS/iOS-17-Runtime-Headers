
@interface MPUPlaybackAlertController : UIAlertController {
    NSError * _error;
    MPAVItem * _item;
    long long  _playbackAlertType;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) MPAVItem *item;
@property (nonatomic, readonly) long long playbackAlertType;

+ (id)contentRestrictedPlaybackAlertControllerForContentType:(long long)arg1 dismissalBlock:(id /* block */)arg2;
+ (id)genericAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(id /* block */)arg3;
+ (id)playbackAlertControllerForItem:(id)arg1 contentType:(long long)arg2 error:(id)arg3 dismissalBlock:(id /* block */)arg4;
+ (long long)playbackAlertTypeForError:(id)arg1;
+ (id)userRemovedAlertControllerForItem:(id)arg1 dismissalBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)error;
- (id)item;
- (long long)playbackAlertType;

@end
