
@interface VCRedundancyControllerAudio : NSObject <VCRedundancyControllerProtocol> {
    <VCRedundancyControlAlgorithm> * _algorithm;
    double  _currentRedundancyInterval;
    unsigned int  _currentRedundancyPercentage;
    bool  _isNWConnectionEnabled;
    unsigned int  _mode;
    int  _networkStatisticsType;
    id  _redundancyControllerDelegate;
    int  _statisticRegistrationIndexNWConnection;
    int  _statisticRegistrationIndexNetwork;
    AVCStatisticsCollector * _statisticsCollector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned int)arg3;
- (void)reportRedundancyPercentage:(unsigned int)arg1 redundancyInterval:(double)arg2;
- (void)unregisterStatistics;
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; struct tagVCStatisticsECNStats { unsigned short x_22_3_1; unsigned short x_22_3_2; } x_2_2_22; struct tagVCStatisticsECNStats { unsigned short x_23_3_1; unsigned short x_23_3_2; } x_2_2_23; bool x_2_2_24; } x_8_1_2; } x8; })arg1;

@end
