
@interface IDSQRParticipantStreams : NSObject {
    bool  _anyParticipant;
    bool  _anyStream;
    NSNumber * _participantID;
    NSMutableArray * _streamArray;
}

@property (nonatomic, readonly) bool anyParticipant;
@property (nonatomic, readonly) bool anyStream;
@property (readonly) NSNumber *participantID;
@property (readonly) NSMutableArray *streamArray;

+ (id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(bool)arg3 anyStream:(bool)arg4;

- (void).cxx_destruct;
- (bool)anyParticipant;
- (bool)anyStream;
- (id)description;
- (id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(bool)arg3 anyStream:(bool)arg4;
- (id)participantID;
- (id)streamArray;

@end
