
@interface AVPlaybackSpeedCollection : NSObject {
    AVPlaybackSpeed * _activeSpeed;
    <AVPlaybackSpeedCollectionDelegate> * _delegate;
    NSArray * _speeds;
}

@property (nonatomic, readonly) AVPlaybackSpeed *selectedSpeed;
@property (nonatomic, readonly) NSArray *speeds;

+ (id)collectionWithSpeeds:(id)arg1;
+ (id)defaultSpeedFromList:(id)arg1;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;
+ (id)keyPathsForValuesAffectingSelectedSpeed;

- (void).cxx_destruct;
- (id)_initInternalWithSpeeds:(id)arg1;
- (id)activeSpeed;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)displaySpeeds;
- (id)internalDescription;
- (void)selectNextPlaybackSpeed:(id)arg1;
- (void)selectSpeed:(id)arg1;
- (id)selectedSpeed;
- (void)setActiveSpeed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)speeds;

@end
