
@interface CNiOSABDependentPropertiesUpdateContext : NSObject {
    bool  _hasPendingCropRect;
    bool  _hasPendingImageData;
    bool  _hasPendingSyncImageData;
    bool  _hasPendingThumbnailImageData;
    bool  _isUnifiedContact;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pendingCropRect;
    NSData * _pendingFullscreenImageData;
    NSData * _pendingImageData;
    NSData * _pendingSyncImageData;
    NSData * _pendingThumbnailImageData;
}

@property (nonatomic) bool hasPendingCropRect;
@property (nonatomic) bool hasPendingImageData;
@property (nonatomic) bool hasPendingSyncImageData;
@property (nonatomic) bool hasPendingThumbnailImageData;
@property (nonatomic) bool isUnifiedContact;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pendingCropRect;
@property (nonatomic, copy) NSData *pendingFullscreenImageData;
@property (nonatomic, copy) NSData *pendingImageData;
@property (nonatomic, copy) NSData *pendingSyncImageData;
@property (nonatomic, copy) NSData *pendingThumbnailImageData;

+ (id)os_log;
+ (bool)shouldSetWatchChanges;

- (void).cxx_destruct;
- (bool)flushPendingImageChangesToPerson:(void*)arg1 logger:(id)arg2 error:(id*)arg3;
- (bool)hasPendingCropRect;
- (bool)hasPendingImageData;
- (bool)hasPendingSyncImageData;
- (bool)hasPendingThumbnailImageData;
- (bool)isUnifiedContact;
- (bool)logIfConditionFailed:(bool)arg1 message:(id)arg2 error:(struct __CFError {}**)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pendingCropRect;
- (id)pendingFullscreenImageData;
- (id)pendingImageData;
- (id)pendingSyncImageData;
- (id)pendingThumbnailImageData;
- (void)resetAllData;
- (void)setHasPendingCropRect:(bool)arg1;
- (void)setHasPendingImageData:(bool)arg1;
- (void)setHasPendingSyncImageData:(bool)arg1;
- (void)setHasPendingThumbnailImageData:(bool)arg1;
- (void)setIsUnifiedContact:(bool)arg1;
- (void)setPendingCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPendingFullscreenImageData:(id)arg1;
- (void)setPendingImageData:(id)arg1;
- (void)setPendingSyncImageData:(id)arg1;
- (void)setPendingThumbnailImageData:(id)arg1;
- (bool)setWatchChangesforThumbnailImageDataToPerson:(void*)arg1 error:(id*)arg2;

@end
