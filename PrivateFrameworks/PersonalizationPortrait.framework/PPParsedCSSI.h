
@interface PPParsedCSSI : NSObject {
    NSArray * _identifiers;
    NSMutableSet * _neStrings;
    NSMutableSet * _topicStrings;
}

@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic, retain) NSMutableSet *neStrings;
@property (nonatomic, retain) NSMutableSet *topicStrings;

- (void).cxx_destruct;
- (id)identifiers;
- (id)init;
- (id)neStrings;
- (void)setIdentifiers:(id)arg1;
- (void)setNeStrings:(id)arg1;
- (void)setTopicStrings:(id)arg1;
- (id)topicStrings;

@end
