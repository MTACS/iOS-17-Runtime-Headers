
@interface AXAssertionIdentifierTypePair : NSObject {
    NSString * _identifier;
    NSString * _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
