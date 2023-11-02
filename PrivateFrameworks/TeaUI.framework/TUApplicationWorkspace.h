
@interface TUApplicationWorkspace : NSObject {
    LSApplicationWorkspace * _applicationWorkspace;
}

@property (nonatomic, readonly) LSApplicationWorkspace *applicationWorkspace;

+ (id)shared;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)initWithApplicationWorkspace:(id)arg1;
- (void)openSensitiveURL:(id)arg1 options:(id)arg2;

@end
