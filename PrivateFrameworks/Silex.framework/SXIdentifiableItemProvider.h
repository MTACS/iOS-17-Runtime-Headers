
@interface SXIdentifiableItemProvider : NSItemProvider {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithObject:(id)arg1 identifier:(id)arg2;

@end
