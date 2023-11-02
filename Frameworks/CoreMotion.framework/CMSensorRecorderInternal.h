
@interface CMSensorRecorderInternal : NSObject {
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;
- (void)dealloc;
- (id)init;
- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;
- (bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;
- (void)teardown;
- (bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;

@end
