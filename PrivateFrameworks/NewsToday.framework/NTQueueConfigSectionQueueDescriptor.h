
@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor> {
    NSArray * _sectionDescriptors;
    unsigned long long  _visibleSectionConfigsLimit;
}

@property (nonatomic, readonly, copy) NSArray *sectionDescriptors;
@property (nonatomic, readonly) unsigned long long visibleSectionConfigsLimit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithQueueConfig:(id)arg1 appConfiguration:(id)arg2 todayData:(id)arg3 inFavoritesOnlyMode:(bool)arg4 respectsWidgetVisibleSectionsLimit:(bool)arg5;
- (id)sectionDescriptors;
- (unsigned long long)visibleSectionConfigsLimit;

@end
