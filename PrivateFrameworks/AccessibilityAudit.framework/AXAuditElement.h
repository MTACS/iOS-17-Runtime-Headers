
@interface AXAuditElement : NSObject <AXAuditTransportableObjectProtocol, NSCopying> {
    id  _accessibilityIdentifier;
    id  _platformElementToken;
}

@property (nonatomic, copy) id accessibilityIdentifier;
@property (nonatomic, copy) AXElement *axElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id platformElementToken;
@property (readonly) Class superclass;

+ (id)auditElementWithElement:(id)arg1 identifier:(id)arg2;
+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)axElement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __AXUIElement { }*)createAxElementRefForXCTest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)platformElementToken;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAxElement:(id)arg1;
- (void)setPlatformElementToken:(id)arg1;

@end
