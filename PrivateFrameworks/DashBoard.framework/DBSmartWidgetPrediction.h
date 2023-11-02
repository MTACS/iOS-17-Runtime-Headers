
@interface DBSmartWidgetPrediction : NSObject {
    id /* block */  _actionBlock;
    CAFilter * _compositingFilter;
    <DBSmartWidgetPredictionDelegate> * _delegate;
    UIImage * _image;
    CARObserverHashTable * _observers;
    bool  _showImageBorder;
    NSString * _subtitle;
    long long  _tieBreakScore;
    NSString * _title;
    NSUUID * _uniqueIdentifier;
    NSArray * _validRanges;
}

@property (nonatomic, readonly, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) CAFilter *compositingFilter;
@property (nonatomic) <DBSmartWidgetPredictionDelegate> *delegate;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly) bool showImageBorder;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) long long tieBreakScore;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSArray *validRanges;

+ (long long)_scoreFor:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3;
+ (double)initialValidInterval;
+ (SEL)isEqualClassSelector;

- (void).cxx_destruct;
- (id)_debugScoreText;
- (bool)_defaultIsEqualClass:(id)arg1;
- (id /* block */)actionBlock;
- (void)addObserver:(id)arg1;
- (long long)compare:(id)arg1;
- (id)compositingFilter;
- (id)debugScoreText;
- (id)debugValidRangesText;
- (id)defaultValidRanges;
- (id)delegate;
- (id)description;
- (id)image;
- (id)init;
- (double)initialValidInterval;
- (void)invalidateValidIntervals;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPrediction:(id)arg1;
- (double)maxValue;
- (double)minValue;
- (id)observers;
- (id)predictedObjectDescription;
- (void)predictionDidUpdate;
- (long long)predictionScore;
- (void)removeObserver:(id)arg1;
- (long long)score;
- (void)setDelegate:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setValidRanges:(id)arg1;
- (bool)showImageBorder;
- (id)subtitle;
- (long long)tieBreakScore;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateRangeIfNeeded:(id)arg1;
- (bool)updateWithPrediction:(id)arg1;
- (id)validRanges;

@end
