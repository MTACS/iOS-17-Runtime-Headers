
@interface HMDTimeBasedFlagDaily : NSObject <HMDTimeBasedFlag> {
    NSDate * _bit0Date;
    unsigned long long  _bits;
    <HMDTimeBasedFlagContext> * _context;
    HMMDateProvider * _dateProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (retain) NSDate *bit0Date;
@property unsigned long long bits;
@property (nonatomic, readonly) <HMDTimeBasedFlagContext> *context;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;

+ (id)convertLegacyFlagBits:(id)arg1 lastSaveTIme:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_bitMaskForDate:(id)arg1;
- (id)bit0Date;
- (unsigned long long)bits;
- (unsigned long long)bitsForDate:(id)arg1 bitCount:(long long)arg2 outValidBitCount:(long long*)arg3;
- (id)context;
- (unsigned long long)currentBits;
- (id)dateProvider;
- (id)description;
- (id)initWithContext:(id)arg1 dateProvider:(id)arg2;
- (id)initWithSerializedFlag:(id)arg1 context:(id)arg2 dateProvider:(id)arg3;
- (id)serializeToDictionary;
- (void)setBit0Date:(id)arg1;
- (void)setBitForDate:(id)arg1;
- (void)setBits:(unsigned long long)arg1;
- (void)setCurrentBit;

@end
