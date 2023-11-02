
@interface NTKTopLevelSectionInfo : NSObject <NSCopying, NTKComplicationSectionInfo> {
    NSString * _ntk_identifier;
    NSString * _ntk_localizedSectionName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *ntk_identifier;
@property (nonatomic, copy) NSString *ntk_localizedSectionName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 localizedSectionName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)ntk_identifier;
- (id)ntk_localizedSectionName;
- (void)setNtk_identifier:(id)arg1;
- (void)setNtk_localizedSectionName:(id)arg1;

@end
