
@interface HUCCMosaicArranger : NSObject {
    unsigned long long  _chosenLayoutType;
    NSArray * _layouts;
    unsigned long long  _numberOfItemsNeeded;
}

@property (nonatomic) unsigned long long chosenLayoutType;
@property (nonatomic, retain) NSArray *layouts;
@property (nonatomic) unsigned long long numberOfItemsNeeded;

- (void).cxx_destruct;
- (void)_configureForLandscapeGrid;
- (void)_configureForPortraitGrid;
- (id)calculateOrderingForItems:(id)arg1;
- (unsigned long long)chosenLayoutType;
- (id)initWithCCMosaicType:(unsigned long long)arg1;
- (id)layouts;
- (unsigned long long)numberOfItemsNeeded;
- (void)setChosenLayoutType:(unsigned long long)arg1;
- (void)setLayouts:(id)arg1;
- (void)setNumberOfItemsNeeded:(unsigned long long)arg1;

@end
