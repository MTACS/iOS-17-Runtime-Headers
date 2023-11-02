
@interface ATXDefaultHomeScreenItemTilerPodBuilder : NSObject <ATXDefaultHomeScreenItemTiler> {
    ATXDefaultWidgetStack * _defaultStack;
    NSMutableArray * _defaultWidgetsExtraLarge;
    NSMutableArray * _defaultWidgetsLarge;
    NSMutableArray * _defaultWidgetsMedium;
    NSMutableArray * _defaultWidgetsSmall;
    ATXDefaultHomeScreenItemTilerHelper * _tilerHelper;
    unsigned long long  _widgetFamilyMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) ATXDefaultWidgetStack *defaultStack;
@property (nonatomic, retain) NSMutableArray *defaultWidgetsExtraLarge;
@property (nonatomic, retain) NSMutableArray *defaultWidgetsLarge;
@property (nonatomic, retain) NSMutableArray *defaultWidgetsMedium;
@property (nonatomic, retain) NSMutableArray *defaultWidgetsSmall;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tiledHomeScreenItems;
@property (nonatomic, retain) ATXDefaultHomeScreenItemTilerHelper *tilerHelper;
@property (nonatomic) unsigned long long widgetFamilyMask;

- (void).cxx_destruct;
- (unsigned long long)_addPod:(id)arg1 podType:(unsigned long long)arg2 podsAdded:(unsigned long long)arg3;
- (unsigned long long)_addPodTypeFourSmalls:(id)arg1;
- (unsigned long long)_addPodTypeOneExtraLarge:(id)arg1 podsAdded:(unsigned long long)arg2;
- (unsigned long long)_addPodTypeOneLarge:(id)arg1;
- (unsigned long long)_addPodTypeOneMediumAndTwoSmalls:(id)arg1;
- (unsigned long long)_addPodTypeTwoMediums:(id)arg1;
- (unsigned long long)_addPodTypeTwoSmallsAndOneMedium:(id)arg1;
- (unsigned long long)addFirstPod:(id)arg1;
- (unsigned long long)addPod:(id)arg1 podType:(unsigned long long)arg2 allowAlternatePodTypeAsBackup:(bool)arg3 podsAdded:(unsigned long long)arg4;
- (id)defaultStack;
- (id)defaultWidgetsExtraLarge;
- (id)defaultWidgetsLarge;
- (id)defaultWidgetsMedium;
- (id)defaultWidgetsSmall;
- (id)initWithDefaultStack:(id)arg1 defaultWidgetsSmall:(id)arg2 defaultWidgetsMedium:(id)arg3 defaultWidgetsLarge:(id)arg4 defaultWidgetsExtraLarge:(id)arg5 widgetFamilyMask:(unsigned long long)arg6;
- (void)setDefaultStack:(id)arg1;
- (void)setDefaultWidgetsExtraLarge:(id)arg1;
- (void)setDefaultWidgetsLarge:(id)arg1;
- (void)setDefaultWidgetsMedium:(id)arg1;
- (void)setDefaultWidgetsSmall:(id)arg1;
- (void)setTilerHelper:(id)arg1;
- (void)setWidgetFamilyMask:(unsigned long long)arg1;
- (id)tiledHomeScreenItems;
- (id)tilerHelper;
- (unsigned long long)widgetFamilyMask;

@end
