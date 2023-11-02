
@interface AVTMemojiBodyController : NSObject {
    NSMutableArray * _bodyJoints;
    SCNNode * _bodyRoot;
    SCNNode * _leftHand;
    NSMutableArray * _leftHandJoints;
    SCNNode * _leftHandModel;
    SCNNode * _rightHand;
    NSMutableArray * _rightHandJoints;
    SCNNode * _rightHandModel;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  l_shoulderNeutralDst;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  l_shoulderNeutralSrcInv;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  r_shoulderNeutralDst;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  r_shoulderNeutralSrcInv;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  spine0_originalOrientation;
}

- (void).cxx_destruct;

@end
