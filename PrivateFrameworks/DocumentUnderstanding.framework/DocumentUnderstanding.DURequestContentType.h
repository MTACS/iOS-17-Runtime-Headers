
@interface DocumentUnderstanding.DURequestContentType : NSObject <NSCopying> {
    void rawValue;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic) long long rawValue;

+ (id)address;
+ (id)category;
+ (id)date;
+ (id)foundInEvent;
+ (id)languageTag;
+ (id)link;
+ (id)navigationTitle;
+ (id)phoneNumber;
+ (id)poem;
+ (id)posTags;
+ (id)userInterfaceUnderstanding;
+ (id)wikiDataTopic;

- (id)copyWithZone:(void*)arg1;
- (void)formIntersection:(id)arg1;
- (void)formSymmetricDifference:(id)arg1;
- (void)formUnion:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithAbilitiesToUnion:(id)arg1;
- (id)initWithRawValue:(long long)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (long long)rawValue;
- (void)setRawValue:(long long)arg1;

@end
