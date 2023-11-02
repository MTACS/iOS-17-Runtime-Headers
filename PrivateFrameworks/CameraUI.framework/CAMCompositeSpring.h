
@interface CAMCompositeSpring : CAMSpring {
    NSArray * _addedSprings;
}

@property (nonatomic, retain) NSArray *addedSprings;

- (void).cxx_destruct;
- (id)addedSprings;
- (void)setAddedSprings:(id)arg1;
- (void)updateForTimestamp:(double)arg1;

@end
