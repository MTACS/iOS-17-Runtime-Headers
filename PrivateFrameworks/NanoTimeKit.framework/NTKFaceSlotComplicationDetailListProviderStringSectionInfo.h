
@interface NTKFaceSlotComplicationDetailListProviderStringSectionInfo : NSObject <NSCopying, NTKComplicationSectionInfo> {
    NSString * _groupName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *ntk_identifier;
@property (nonatomic, readonly, copy) NSString *ntk_localizedSectionName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)initWithGroupName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)ntk_identifier;
- (id)ntk_localizedSectionName;

@end
