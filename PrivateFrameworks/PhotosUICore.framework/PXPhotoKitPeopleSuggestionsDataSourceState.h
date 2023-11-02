
@interface PXPhotoKitPeopleSuggestionsDataSourceState : NSObject <NSCopying> {
    PHFetchResult * _people;
    NSDictionary * _personSuggestionsByPerson;
}

@property (nonatomic, readonly) PHFetchResult *people;
@property (nonatomic, readonly) NSDictionary *personSuggestionsByPerson;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPeople:(id)arg1 personSuggestionsByPerson:(id)arg2;
- (id)people;
- (id)personSuggestionsByPerson;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;

@end
