
@interface AXAuditInspectorSection : NSObject {
    NSMutableArray * __elementAttributes;
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *_elementAttributes;
@property (nonatomic, readonly, retain) NSArray *elementAttributes;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)_elementAttributes;
- (void)addAttribute:(id)arg1;
- (id)addAttribute:(id)arg1 performsAction:(bool)arg2 humanReadable:(id)arg3 settable:(bool)arg4 valueType:(long long)arg5 isInternal:(bool)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementAttributes;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)set_elementAttributes:(id)arg1;
- (id)title;

@end
