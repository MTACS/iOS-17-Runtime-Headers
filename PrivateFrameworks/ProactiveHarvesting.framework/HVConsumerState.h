
@interface HVConsumerState : NSObject {
    unsigned int  _documentsConsumed;
    unsigned int  _documentsIgnored;
    unsigned int  _errorsReported;
    unsigned char  _levelOfService;
    unsigned int  _numberOfExtractions;
    unsigned int  _numberOfInterruptions;
}

@property (nonatomic) unsigned int documentsConsumed;
@property (nonatomic) unsigned int documentsIgnored;
@property (nonatomic) unsigned int errorsReported;
@property (nonatomic) unsigned char levelOfService;
@property (nonatomic) unsigned int numberOfExtractions;
@property (nonatomic) unsigned int numberOfInterruptions;

- (id)description;
- (unsigned int)documentsConsumed;
- (unsigned int)documentsIgnored;
- (unsigned int)errorsReported;
- (id)init;
- (unsigned char)levelOfService;
- (unsigned int)numberOfExtractions;
- (unsigned int)numberOfInterruptions;
- (void)setDocumentsConsumed:(unsigned int)arg1;
- (void)setDocumentsIgnored:(unsigned int)arg1;
- (void)setErrorsReported:(unsigned int)arg1;
- (void)setLevelOfService:(unsigned char)arg1;
- (void)setNumberOfExtractions:(unsigned int)arg1;
- (void)setNumberOfInterruptions:(unsigned int)arg1;

@end
