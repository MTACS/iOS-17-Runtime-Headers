
@interface CHSearchQueryItem : NSObject {
    NSSet * _strokeIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *strokeIdentifiers;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSearchQueryItem:(id)arg1;
- (id)strokeIdentifiers;

@end
