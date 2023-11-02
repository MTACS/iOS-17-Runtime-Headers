
@interface NFAccessoryTag : NSObject {
    <NFAccessoryTagDelegate> * _delegate;
}

@property (nonatomic) <NFAccessoryTagDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
