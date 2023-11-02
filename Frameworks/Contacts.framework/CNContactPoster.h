
@interface CNContactPoster : NSObject {
    NSString * _identifier;
    bool  _ignoredForRevert;
    NSDate * _lastUsedDate;
    CNContactImage * _pairedImage;
    NSData * _posterData;
    NSData * _visualFingerprintData;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool ignoredForRevert;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, retain) CNContactImage *pairedImage;
@property (nonatomic, readonly) NSData *posterData;
@property (nonatomic, retain) NSData *visualFingerprintData;

- (void).cxx_destruct;
- (id)copyWithNewPosterData:(id)arg1;
- (id)identifier;
- (bool)ignoredForRevert;
- (id)initWithIdentifier:(id)arg1 posterData:(id)arg2 lastUsedDate:(id)arg3;
- (id)initWithPosterData:(id)arg1 lastUsedDate:(id)arg2;
- (id)lastUsedDate;
- (id)pairedImage;
- (id)posterData;
- (void)setIgnoredForRevert:(bool)arg1;
- (void)setPairedImage:(id)arg1;
- (void)setVisualFingerprintData:(id)arg1;
- (id)visualFingerprintData;

@end
