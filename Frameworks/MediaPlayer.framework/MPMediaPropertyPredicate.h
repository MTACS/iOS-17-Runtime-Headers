
@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    long long  _comparisonType;
    NSString * _property;
    id  _value;
}

@property (nonatomic) long long comparisonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *property;
@property (readonly) Class superclass;
@property (nonatomic, copy) id value;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (long long)comparisonType;
- (id)description;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)property;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (void)setComparisonType:(long long)arg1;
- (void)setProperty:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (long long)vui_mediaPropertyPredicateComparisonWithPredicateOperatorType:(unsigned long long)arg1;
+ (id)vui_mediaPropertyPredicateWithProperty:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3;

@end
