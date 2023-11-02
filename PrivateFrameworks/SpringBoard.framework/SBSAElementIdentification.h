
@interface SBSAElementIdentification : NSObject <NSCopying, SAElementIdentifying> {
    NSString * _clientIdentifier;
    NSString * _elementIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementIdentifier;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 elementIdentifier:(id)arg2;
- (id)initWithElementIdentification:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
