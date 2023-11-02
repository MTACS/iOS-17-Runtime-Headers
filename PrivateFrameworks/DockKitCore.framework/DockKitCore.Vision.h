
@interface DockKitCore.Vision : NSObject {
    void bodyIdMap;
    void bodyOcclusionTimeout;
    void bodyPrintConfidenceMap;
    void bodyPrintHistory;
    void bodyPrintStamps;
    void bodyRecognitionFailureCount;
    void camera;
    void countToUpdate;
    void detectedObjects;
    void deviceModelName;
    void faceIdMap;
    void faceIdentifier;
    void faceNameMap;
    void facePrintConfidenceMap;
    void facePrintHistory;
    void facePrintInflationRatio;
    void facePrintStamps;
    void faceRecognitionFailureCount;
    void faceToBodyOverlapThreshold;
    void finalBodyPrintRectSize;
    void finalFacePrintRectSize;
    void framesSinceLastDetection;
    void lastBodies;
    void lastFaces;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPrintExtractionStamp;
    void lastTrackedFacesDict;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void maxBodyOverlap;
    void maxRecognitionFailures;
    void minFaceOverlap;
    void minRecogntionSuccess;
    void newBodyPrint;
    void newFacePrint;
    void occludedBodyStamps;
    void orientation;
    void printConfidenceMaxFrames;
    void printExtractionPeriod;
    void streamingGallery;
    void subjectCount;
    void trackedBodyIdCounts;
    void trackedBodyIdconfidences;
    void trackedFaceIdConfidences;
    void trackedFaceIdCounts;
    void trackedObjects;
    void trackingEnabled;
    void unknownModality;
    void visionQueue;
    void vuBodyPrintConfidenceThreshold;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  vuContext;
    void vuFacePrintConfidenceThreshold;
    void vuLock;
    void vuMaxIdentities;
    void vuMaxObservations;
    void vuRecognitionScoreThreshold;
}

- (void).cxx_destruct;
- (id)init;

@end
