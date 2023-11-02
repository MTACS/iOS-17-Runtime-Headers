
@interface SFSearchSuggestion : NSObject <NSCopying, NSSecureCoding, SFSearchSuggestion> {
    NSString * _bundleIdentifier;
    NSString * _detailText;
    NSArray * _duplicateSuggestions;
    NSString * _fbr;
    struct { 
        unsigned int score : 1; 
        unsigned int type : 1; 
        unsigned int previouslyEngaged : 1; 
    }  _has;
    NSString * _identifier;
    bool  _previouslyEngaged;
    NSString * _query;
    NSString * _scopedSearchApplicationBundleIdentifier;
    double  _score;
    NSMutableDictionary * _serverFeatures;
    NSString * _suggestion;
    NSString * _topicIdentifier;
    int  _type;
    NSString * _utteranceText;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *duplicateSuggestions;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) id prediction;
@property (nonatomic) bool previouslyEngaged;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *scopedSearchApplicationBundleIdentifier;
@property (nonatomic) double score;
@property (nonatomic, copy) NSMutableDictionary *serverFeatures;
@property (nonatomic, copy) NSString *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *utteranceText;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailText;
- (id)dictionaryRepresentation;
- (id)duplicateSuggestions;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (bool)hasPreviouslyEngaged;
- (bool)hasScore;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(int)arg5;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(int)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)previouslyEngaged;
- (id)query;
- (id)scopedSearchApplicationBundleIdentifier;
- (double)score;
- (id)serverFeatures;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDuplicateSuggestions:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPreviouslyEngaged:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUtteranceText:(id)arg1;
- (id)suggestion;
- (id)topicIdentifier;
- (int)type;
- (id)utteranceText;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 fbr:(id)arg5;
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 fbr:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore

- (id)prediction;
- (void)setPrediction:(id)arg1;

@end
