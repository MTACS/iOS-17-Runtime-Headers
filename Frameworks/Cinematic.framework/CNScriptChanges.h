
@interface CNScriptChanges : NSObject {
    NSDictionary * _internalChanges;
}

@property (readonly) NSArray *addedDetectionTracks;
@property (readonly) NSData *dataRepresentation;
@property (readonly) float fNumber;
@property (readonly) NSDictionary *internalChanges;
@property (readonly) NSArray *userDecisions;

+ (id)_changesFromInternal:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithInternalChanges:(id)arg1;
- (id)addedDetectionTracks;
- (id)dataRepresentation;
- (float)fNumber;
- (id)initWithDataRepresentation:(id)arg1;
- (id)internalChanges;
- (id)userDecisions;

@end
