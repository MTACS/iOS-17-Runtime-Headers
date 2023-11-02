
@interface SBHTestWidgetStackIconDescriptor : NSObject <SBHTestWidgetIconDescriptor> {
    unsigned long long  _sizeClass;
    NSArray * _widgetIconDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sizeClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *widgetIconDescriptors;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithWidgetIconDescriptors:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sbh_iconDescriptorType;
- (bool)sbh_isValidWithError:(id*)arg1;
- (unsigned long long)sizeClass;
- (id)widgetIconDescriptors;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)defaultStackIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)padDefaultLeadingHomescreenLayoutStackWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)padDefaultTrailingHomescreenLayoutStackWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;

@end
