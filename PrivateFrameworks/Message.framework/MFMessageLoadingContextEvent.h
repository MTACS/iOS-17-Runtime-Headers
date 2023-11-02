
@interface MFMessageLoadingContextEvent : NSObject {
    NSArray * _content;
    MFMessageLoadingContext * _context;
    NSError * _error;
    bool  _hasLoadedBestAlternativePart;
    bool  _hasLoadedCompleteBody;
    MFMimeBody * _loadedBody;
    MFMimePart * _loadedPart;
    unsigned long long  _remainingBytes;
    long long  _transportType;
}

@property (nonatomic, copy) NSArray *content;
@property (nonatomic) MFMessageLoadingContext *context;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool hasLoadedBestAlternativePart;
@property (nonatomic) bool hasLoadedCompleteBody;
@property (nonatomic, retain) MFMimeBody *loadedBody;
@property (nonatomic, retain) MFMimePart *loadedPart;
@property (nonatomic, readonly) MFMailMessage *message;
@property (nonatomic) unsigned long long remainingBytes;
@property (nonatomic, readonly) NSError *smimeError;
@property (nonatomic) long long transportType;

- (void).cxx_destruct;
- (id)_descriptionForDebugging:(bool)arg1;
- (id)content;
- (id)context;
- (id)debugDescription;
- (id)description;
- (id)error;
- (bool)hasLoadedBestAlternativePart;
- (bool)hasLoadedCompleteBody;
- (id)loadedBody;
- (id)loadedPart;
- (id)message;
- (unsigned long long)remainingBytes;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasLoadedBestAlternativePart:(bool)arg1;
- (void)setHasLoadedCompleteBody:(bool)arg1;
- (void)setLoadedBody:(id)arg1;
- (void)setLoadedPart:(id)arg1;
- (void)setRemainingBytes:(unsigned long long)arg1;
- (void)setTransportType:(long long)arg1;
- (id)smimeError;
- (long long)transportType;

@end
