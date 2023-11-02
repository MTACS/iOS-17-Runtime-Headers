
@interface CTBandInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _fActiveBands;
    NSMutableDictionary * _fSupportedBands;
}

@property (nonatomic, retain) NSMutableDictionary *fActiveBands;
@property (nonatomic, retain) NSMutableDictionary *fSupportedBands;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeBands;
- (id)activeBandsForRat:(id)arg1;
- (bool)addActiveBand:(id)arg1 forRat:(id)arg2;
- (bool)addActiveBands:(id)arg1 forRat:(id)arg2;
- (bool)addSupportedBand:(id)arg1 forRat:(id)arg2;
- (bool)addSupportedBands:(id)arg1 forRat:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fActiveBands;
- (id)fSupportedBands;
- (id)init;
- (id)initWithActiveBands:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupported:(id)arg1 andActiveBands:(id)arg2;
- (id)initWithSupportedBands:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFActiveBands:(id)arg1;
- (void)setFSupportedBands:(id)arg1;
- (id)supportedBands;
- (id)supportedBandsForRat:(id)arg1;

@end
