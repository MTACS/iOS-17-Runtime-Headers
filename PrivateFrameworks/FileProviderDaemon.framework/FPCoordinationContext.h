
@interface FPCoordinationContext : NSObject {
    id /* block */  _completionHandler;
    NSProgress * _progress;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) NSProgress *progress;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithProgress:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)progress;

@end
