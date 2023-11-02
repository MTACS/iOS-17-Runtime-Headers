
@interface DBSmartWidgetHomePrediction : DBSmartWidgetPrediction <DBGarageDoorObserver> {
    DBGarageDoor * _garageDoor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DBGarageDoor *garageDoor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_imageNamed:(id)arg1 onBackgroundColor:(id)arg2;
+ (long long)baseScore;
+ (id)closedGarageDoor;
+ (double)maxValue;
+ (double)minValue;
+ (id)openGarageDoor;
+ (void)resetImages;

- (void).cxx_destruct;
- (long long)_iconType;
- (id /* block */)actionBlock;
- (id)compositingFilter;
- (id)debugScoreText;
- (id)garageDoor;
- (void)garageDoor:(id)arg1 didUpdateDoorState:(long long)arg2;
- (void)garageDoor:(id)arg1 didUpdateObstructionDetected:(bool)arg2;
- (void)garageDoor:(id)arg1 didUpdateTargetDoorState:(long long)arg2;
- (id)image;
- (id)initWithGarageDoor:(id)arg1;
- (id)predictedObject;
- (void)serviceDidUpdate:(id)arg1;
- (bool)showImageBorder;
- (id)subtitle;
- (long long)tieBreakScore;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uniqueIdentifier;
- (bool)updateWithPrediction:(id)arg1;
- (double)value;

@end
