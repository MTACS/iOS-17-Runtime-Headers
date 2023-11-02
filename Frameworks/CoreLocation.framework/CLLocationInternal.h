
@interface CLLocationInternal : NSObject {
    NSData * fCoarseMetaData;
    _CLLocationFusionInfo * fFusionInfo;
    CLLocationGnssOdometerInfo * fGnssOdometerInfo;
    _CLLocationGroundAltitude * fGroundAltitude;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
        unsigned int integrity; 
        int referenceFrame; 
        int rawReferenceFrame; 
        int signalEnvironmentType; 
        double ellipsoidalAltitude; 
        bool fromSimulationController; 
    }  fLocation;
    CLLocationMatchInfo * fMatchInfo;
    int  fPositionContextState;
    double  fProbabilityPositionContextStateIndoor;
    double  fProbabilityPositionContextStateOutdoor;
    double  fRawAltitude;
    double  fRawCourseAccuracy;
    double  fRawHorizontalAccuracy;
    double  fRawVerticalAccuracy;
    CLLocationTrackRunInfo * fTrackRunInfo;
    double  fTrustedTimestamp;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 clientLocationPrivate:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; int x_16_1_5; double x_16_1_6; long long x_16_1_7; double x_16_1_8; double x_16_1_9; double x_16_1_10; } x16; struct { struct { int x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; struct { double x_7_3_1; double x_7_3_2; } x_1_2_7; double x_1_2_8; double x_1_2_9; } x_17_1_1; int x_17_1_2; unsigned long long x_17_1_3; int x_17_1_4; int x_17_1_5; int x_17_1_6; int x_17_1_7; double x_17_1_8; bool x_17_1_9; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; int x19; float x20; struct { double x_21_1_1; double x_21_1_2; } x21; double x22; double x23; int x24; bool x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; bool x34; bool x35; struct { double x_36_1_1; double x_36_1_2; } x36; })arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 clientLocationPrivate:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; int x_16_1_5; double x_16_1_6; long long x_16_1_7; double x_16_1_8; double x_16_1_9; double x_16_1_10; } x16; struct { struct { int x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; struct { double x_7_3_1; double x_7_3_2; } x_1_2_7; double x_1_2_8; double x_1_2_9; } x_17_1_1; int x_17_1_2; unsigned long long x_17_1_3; int x_17_1_4; int x_17_1_5; int x_17_1_6; int x_17_1_7; double x_17_1_8; bool x_17_1_9; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; int x19; float x20; struct { double x_21_1_1; double x_21_1_2; } x21; double x22; double x23; int x24; bool x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; bool x34; bool x35; struct { double x_36_1_1; double x_36_1_2; } x36; })arg2 coarseMetaData:(id)arg3;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 coarseMetaData:(id)arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 trackRunInfo:(id)arg6 rawHorizontalAccuracy:(double)arg7 rawAltitude:(double)arg8 rawVerticalAccuracy:(double)arg9 rawCourseAccuracy:(double)arg10 positionContextStateType:(int)arg11 probabilityPositionContextStateIndoor:(double)arg12 probabilityPositionContextStateOutdoor:(double)arg13 gnssOdometerInfo:(id)arg14;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 trackRunInfo:(id)arg6 rawHorizontalAccuracy:(double)arg7 rawAltitude:(double)arg8 rawVerticalAccuracy:(double)arg9 rawCourseAccuracy:(double)arg10 positionContextStateType:(int)arg11 probabilityPositionContextStateIndoor:(double)arg12 probabilityPositionContextStateOutdoor:(double)arg13 gnssOdometerInfo:(id)arg14 coarseMetaData:(id)arg15;

@end
