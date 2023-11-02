
@interface DSSharingType : NSObject {
    NSMutableOrderedSet * _people;
    <DSSource> * _source;
}

@property (nonatomic, readonly, copy) NSArray *allPeople;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) UIImage *iconForDetail;
@property (nonatomic, readonly) UIImage *iconForTable;
@property (nonatomic, readonly, copy) NSString *localizedDetailText;
@property (nonatomic, retain) NSMutableOrderedSet *people;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly, copy) NSArray *sortedPeople;
@property (nonatomic, retain) <DSSource> *source;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (void)initialize;

- (void).cxx_destruct;
- (void)addPerson:(id)arg1;
- (id)allPeople;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithSource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)people;
- (void)removePerson:(id)arg1;
- (long long)score;
- (void)setPeople:(id)arg1;
- (void)setSource:(id)arg1;
- (id)sortedPeople;
- (id)source;
- (void)stopAllSharingOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSharingPeople:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)valueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI

- (id)iconForDetail;
- (id)iconForTable;

@end
