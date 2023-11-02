
@interface PUViewModelChange : NSObject {
    bool  _hasChanges;
}

@property (nonatomic, readonly) bool hasChanges;

- (bool)hasChanges;
- (void)setHasChanges;

@end
