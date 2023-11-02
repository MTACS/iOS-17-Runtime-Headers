
@interface ATXHomeScreenWidgetDescriptor : NSObject <ATXDefaultHomeScreenItem, NSCopying, NSSecureCoding> {
    NSString * _appBundleId;
    CHSWidgetDescriptor * _avocadoDescriptor;
    long long  _rankType;
    unsigned long long  _suggestedSize;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) CHSWidgetDescriptor *avocadoDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long rankType;
@property (nonatomic) unsigned long long suggestedSize;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)avocadoDescriptor;
- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdForMetrics;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)rankType;
- (void)setAppBundleId:(id)arg1;
- (void)setAvocadoDescriptor:(id)arg1;
- (void)setRankType:(long long)arg1;
- (void)setSuggestedSize:(unsigned long long)arg1;
- (unsigned long long)suggestedSize;
- (id)widgetKind;

@end
