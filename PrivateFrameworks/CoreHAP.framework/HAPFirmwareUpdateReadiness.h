
@interface HAPFirmwareUpdateReadiness : NSObject <HAPTLVProtocol, NSCopying> {
    HAPStagingNotReadyReasonsWrapper * _stagingNotReadyReasons;
    HAPUpdateNotReadyReasonsWrapper * _updateNotReadyReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPStagingNotReadyReasonsWrapper *stagingNotReadyReasons;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPUpdateNotReadyReasonsWrapper *updateNotReadyReasons;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithStagingNotReadyReasons:(id)arg1 updateNotReadyReasons:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setStagingNotReadyReasons:(id)arg1;
- (void)setUpdateNotReadyReasons:(id)arg1;
- (id)stagingNotReadyReasons;
- (id)updateNotReadyReasons;

@end
