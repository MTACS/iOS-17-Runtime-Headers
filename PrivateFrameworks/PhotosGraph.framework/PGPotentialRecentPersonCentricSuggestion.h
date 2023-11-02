
@interface PGPotentialRecentPersonCentricSuggestion : NSObject {
    NSArray * _assets;
    NSDate * _notSeenSinceDate;
    NSString * _personLocalIdentifier;
    unsigned long long  _relationshipScore;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSDate *notSeenSinceDate;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) unsigned long long relationshipScore;

- (void).cxx_destruct;
- (id)assets;
- (id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3;
- (id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 relationshipScore:(unsigned long long)arg3;
- (id)notSeenSinceDate;
- (id)personLocalIdentifier;
- (unsigned long long)relationshipScore;

@end
