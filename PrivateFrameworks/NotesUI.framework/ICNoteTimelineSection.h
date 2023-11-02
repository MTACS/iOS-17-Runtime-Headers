
@interface ICNoteTimelineSection : NSObject {
    ICNoteTimelineSectionIdentifier * _identifier;
    NSArray * _objectIDs;
}

@property (nonatomic, retain) ICNoteTimelineSectionIdentifier *identifier;
@property (nonatomic, retain) NSArray *objectIDs;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 objectIDs:(id)arg2;
- (id)objectIDs;
- (void)setIdentifier:(id)arg1;
- (void)setObjectIDs:(id)arg1;

@end
