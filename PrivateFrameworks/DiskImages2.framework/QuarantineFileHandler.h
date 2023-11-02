
@interface QuarantineFileHandler : NSObject {
    bool  _isQuarantined;
}

@property (nonatomic, readonly) bool isQuarantined;

- (bool)applyMountPointsWithBSDName:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)isQuarantined;

@end
