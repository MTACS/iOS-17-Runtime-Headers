
@interface CKTranscriptLayoutMessageEditingContext : NSObject {
    NSString * _editedMessageGuid;
    double  _editedMessageHeight;
}

@property (nonatomic, retain) NSString *editedMessageGuid;
@property (nonatomic) double editedMessageHeight;

- (void).cxx_destruct;
- (id)editedMessageGuid;
- (double)editedMessageHeight;
- (id)initWithEditedMessageGuid:(id)arg1 editedMessageHeight:(double)arg2;
- (bool)isEqualToContext:(id)arg1;
- (void)setEditedMessageGuid:(id)arg1;
- (void)setEditedMessageHeight:(double)arg1;

@end
