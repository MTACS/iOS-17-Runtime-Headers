
@interface MCMActionArgumentBase : NSObject <MCMActionArgument> {
    NSString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *string;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fileURL;
- (id)initWithString:(id)arg1;
- (id)string;

@end
