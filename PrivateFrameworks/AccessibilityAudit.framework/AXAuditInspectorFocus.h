
@interface AXAuditInspectorFocus : NSObject {
    NSString * _captionText;
    AXAuditElement * _element;
    NSArray * _inspectorSections;
    NSString * _spokenDescription;
}

@property (nonatomic, copy) NSString *captionText;
@property (nonatomic, retain) AXAuditElement *element;
@property (nonatomic, retain) NSArray *inspectorSections;
@property (nonatomic, copy) NSString *spokenDescription;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)captionText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)element;
- (unsigned long long)hash;
- (id)inspectorSections;
- (bool)isEqual:(id)arg1;
- (void)setCaptionText:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setInspectorSections:(id)arg1;
- (void)setSpokenDescription:(id)arg1;
- (id)spokenDescription;

@end
