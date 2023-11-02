
@interface ATXSpotlightSuggestionLayout : NSObject <ATXUICacheProtocol, NSCopying> {
    NSArray * _collections;
    NSArray * _scores;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSArray *collections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXProactiveSuggestion *highestConfidenceSuggestion;
@property (nonatomic, readonly) NSArray *scores;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)isValidInputWithCollections:(id)arg1 scores:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collections;
- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)highestConfidenceSuggestion;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollections:(id)arg1 scores:(id)arg2 uuid:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSpotlightSuggestionLayout:(id)arg1;
- (id)proto;
- (id)scores;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
