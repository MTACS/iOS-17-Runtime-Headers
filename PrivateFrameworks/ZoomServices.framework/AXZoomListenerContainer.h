
@interface AXZoomListenerContainer : NSObject {
    id /* block */  handler;
    NSString * identifier;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)identifier;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;

@end
