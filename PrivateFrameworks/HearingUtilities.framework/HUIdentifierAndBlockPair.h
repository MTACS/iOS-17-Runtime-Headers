
@interface HUIdentifierAndBlockPair : NSObject {
    id  _block;
    id  _identifier;
}

@property (nonatomic, copy) id block;
@property (nonatomic) id identifier;

- (void).cxx_destruct;
- (id)block;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 andBlock:(id)arg2;
- (void)setBlock:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
