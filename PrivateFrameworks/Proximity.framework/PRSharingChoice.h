
@interface PRSharingChoice : NSObject {
    bool  _currentlyInitiating;
    struct unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>> { 
        struct __compressed_pair<SharingImportanceManager *, std::default_delete<SharingImportanceManager>> { 
            struct SharingImportanceManager {} *__value_; 
        } __ptr_; 
    }  _estimatorRangeOnly;
    double  _lastBigHeadFirstReportTime;
    NSData * _lastBigHeadMacAddress;
    NSArray * _lastReportedScores;
    double  _lastScoreReportMachContinuousTime;
    NSObject<OS_os_log> * _logger;
    struct SharingImportanceMeasurements { 
        struct vector<NeighborMeasurements, std::allocator<NeighborMeasurements>> { 
            struct NeighborMeasurements {} *__begin_; 
            struct NeighborMeasurements {} *__end_; 
            struct __compressed_pair<NeighborMeasurements *, std::allocator<NeighborMeasurements>> { 
                struct NeighborMeasurements {} *__value_; 
            } __end_cap_; 
        } userSharingInput; 
    }  _measurements;
    id /* block */  _newScoresHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSSortDescriptor * _scoreSortDescriptor;
    NSMutableDictionary * _scores;
    bool  _useRegionBasedEstimator;
}

@property bool currentlyInitiating;
@property (nonatomic, retain) NSObject<OS_os_log> *logger;
@property (copy) id /* block */ newScoresHandler;
@property bool useRegionBasedEstimator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBluetoothProximityEstimate:(struct NeighborMeasurements { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; double x2; bool x3; bool x4; double x5; double x6; bool x7; int x8; bool x9; double x10; bool x11; bool x12; })arg1 currentMachContTime:(double)arg2;
- (void)addRoseSolutions:(id)arg1 currentMachContTime:(double)arg2;
- (void)createEstimators;
- (bool)currentlyInitiating;
- (void)heartbeatTimeout:(double)arg1 currentMachContTime:(double)arg2 useUpdatedScores:(bool)arg3;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)logger;
- (id /* block */)newScoresHandler;
- (void)reportScoresToClientAlways:(bool)arg1 useUpdatedScoreList:(bool)arg2 currentMachContTime:(double)arg3;
- (void)setCurrentlyInitiating:(bool)arg1;
- (void)setLogger:(id)arg1;
- (void)setNewScoresHandler:(id /* block */)arg1;
- (void)setUseRegionBasedEstimator:(bool)arg1;
- (void)updateScoresForTime:(double)arg1;
- (void)updateScoresWithNewMeasurement:(const void*)arg1;
- (bool)useRegionBasedEstimator;

@end
