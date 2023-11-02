
@interface WLRequest : NSObject {
    <WLRequestDelegate> * _delegate;
}

@property (nonatomic) <WLRequestDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)request:(id)arg1 redirect:(bool)arg2;
- (void)sessionDidFinish:(id)arg1 response:(id)arg2 error:(id)arg3 redirect:(bool)arg4;
- (void)setDelegate:(id)arg1;

@end
