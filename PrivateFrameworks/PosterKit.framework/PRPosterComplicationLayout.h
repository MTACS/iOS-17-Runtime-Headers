
@interface PRPosterComplicationLayout : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _complications;
    PRSWidget * _inlineComplication;
    NSDictionary * _sidebarComplicationIconLayout;
    NSArray * _sidebarComplications;
}

@property (nonatomic, readonly, copy) NSArray *complications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) PRSWidget *inlineComplication;
@property (nonatomic, readonly, copy) NSDictionary *sidebarComplicationIconLayout;
@property (nonatomic, readonly, copy) NSArray *sidebarComplications;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_complications:(id)arg1 AreEqualTo:(id)arg2;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInlineComplication:(id)arg1 complications:(id)arg2;
- (id)initWithInlineComplication:(id)arg1 sidebarComplicationIconLayout:(id)arg2 sidebarComplications:(id)arg3 complications:(id)arg4;
- (id)initWithInlineComplication:(id)arg1 sidebarComplications:(id)arg2 complications:(id)arg3;
- (id)inlineComplication;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComplicationLayout:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sidebarComplicationIconLayout;
- (id)sidebarComplications;

@end
