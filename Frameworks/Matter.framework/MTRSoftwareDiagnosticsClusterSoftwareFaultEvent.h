
@interface MTRSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject <NSCopying> {
    NSData * _faultRecording;
    NSNumber * _id;
    NSString * _name;
}

@property (nonatomic, copy) NSData *faultRecording;
@property (nonatomic, copy) NSNumber *id;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)faultRecording;
- (id)id;
- (id)init;
- (id)name;
- (void)setFaultRecording:(id)arg1;
- (void)setId:(id)arg1;
- (void)setName:(id)arg1;

@end
