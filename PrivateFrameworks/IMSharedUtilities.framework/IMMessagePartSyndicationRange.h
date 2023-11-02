
@interface IMMessagePartSyndicationRange : NSObject <NSCopying, NSSecureCoding> {
    IMMessagePartSyndicationAssetDescriptor * _assetDescriptor;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messagePartRange;
    NSString * _serializedString;
    unsigned long long  _serializedVersion;
    NSDate * _syndicationStartDate;
    long long  _syndicationStatus;
    long long  _syndicationType;
}

@property (nonatomic, readonly) IMMessagePartSyndicationAssetDescriptor *assetDescriptor;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (nonatomic, readonly) NSString *serializedString;
@property (nonatomic, readonly) unsigned long long serializedVersion;
@property (nonatomic, readonly) NSDate *syndicationStartDate;
@property (nonatomic) long long syndicationStatus;
@property (nonatomic, readonly) long long syndicationType;

+ (id)_stringFromSyndicationStatus:(long long)arg1;
+ (id)_stringFromSyndicationType:(long long)arg1;
+ (id)deserializeSyndicationRangeFromString:(id)arg1;
+ (id)findChangesFromRangeArray:(id)arg1 comparedToRangeArray:(id)arg2;
+ (id)maxStartDateForRanges:(id)arg1;
+ (id)messagePartSyndicationRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inRangesArray:(id)arg2;
+ (id)messageRangeFromTokens_v1:(id)arg1;
+ (id)messageRangeFromTokens_v3:(id)arg1;
+ (id)minStartDateForRanges:(id)arg1;
+ (id)rangesFromSerializedString:(id)arg1;
+ (id)removeAssetInfoForAsset:(long long)arg1 range:(id)arg2;
+ (id)replaceAssetInfoWith:(id)arg1 asset:(long long)arg2 range:(id)arg3;
+ (unsigned long long)serializationVersion;
+ (id)serializedStringFromArray:(id)arg1;
+ (void)setSerializationVersion:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)syndicationRangeForAssetDescriptor:(id)arg1 range:(id)arg2;
+ (id)unarchiveClasses;
+ (id)updateAssetInfoWith:(id)arg1 asset:(long long)arg2 range:(id)arg3;
+ (id)updateMessagesRanges:(id)arg1 withMessagePartSyndicationRanges:(id)arg2 didUpdate:(bool*)arg3;

- (void).cxx_destruct;
- (bool)_canBeReplacedByRange:(id)arg1;
- (id)assetDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyndicationAction:(id)arg1;
- (id)initWithSyndicationType:(long long)arg1 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 syndicationStartDate:(id)arg3;
- (id)initWithSyndicationType:(long long)arg1 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 syndicationStartDate:(id)arg3 syndicationStatus:(long long)arg4 assetDescriptor:(id)arg5;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (id)serializedString;
- (unsigned long long)serializedVersion;
- (void)setSyndicationStatus:(long long)arg1;
- (id)syndicationForPartIndex:(unsigned long long)arg1 asset:(long long)arg2;
- (id)syndicationStartDate;
- (long long)syndicationStatus;
- (long long)syndicationType;

@end
