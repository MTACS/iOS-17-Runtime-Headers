
@interface _PSConfidenceModelForSharing : NSObject {
    bool  __PSConfidenceModelInUse;
    _PSConfidenceModelDriver * _confidenceModelDriver;
}

@property bool _PSConfidenceModelInUse;
@property (nonatomic, retain) _PSConfidenceModelDriver *confidenceModelDriver;

- (void).cxx_destruct;
- (bool)_PSConfidenceModelInUse;
- (bool)addEventForModel:(id)arg1 event:(id)arg2;
- (id)confidenceModelDriver;
- (bool)findObjectWithID:(id)arg1 inArray:(id)arg2;
- (double)getConfidenceForModel:(id)arg1;
- (id)getConfidenceRankedModelKeysGivenKeysToSort:(id)arg1;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (void)setConfidenceModelDriver:(id)arg1;
- (void)set_PSConfidenceModelInUse:(bool)arg1;

@end
