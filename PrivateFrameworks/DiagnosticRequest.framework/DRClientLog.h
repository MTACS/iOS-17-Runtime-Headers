
@interface DRClientLog : NSObject {
    NSString * _path;
    NSString * _sandboxExtension;
    bool  _transferOwnership;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *sandboxExtension;
@property (nonatomic, readonly) bool transferOwnership;

+ (id)sandboxExtensionForLog:(id)arg1 transferOwnership:(bool)arg2;

- (void).cxx_destruct;
- (id)_checkPath;
- (id)description;
- (id)initWithPath:(id)arg1 transferOwnership:(bool)arg2 errorOut:(id*)arg3;
- (id)path;
- (id)sandboxExtension;
- (bool)transferOwnership;

@end
