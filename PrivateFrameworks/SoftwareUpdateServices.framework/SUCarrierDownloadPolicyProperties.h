
@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding> {
    NSMutableDictionary * _keyMap;
}

+ (bool)supportsSecureCoding;

- (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (bool)_isValidHour:(long long)arg1;
- (long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)_numberForKey:(id)arg1;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (bool)allowInexpensiveHDMUnlimited;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoDownloadAllowable;
- (bool)isDownloadAllowable;
- (bool)isDownloadAllowableOver2G;
- (bool)isDownloadFree;
- (long long)maximumDownloadSizeInBytes;
- (unsigned long long)numberOfDaysToWaitForCellularDownload;
- (long long)peakEndHour;
- (long long)peakStartHour;

@end
